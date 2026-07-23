/*
 * XREFs of _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0
 * Callers:
 *     _RtlpQueryCriticalSectionOwnerInformation@8 @ 0x4B337A1F (_RtlpQueryCriticalSectionOwnerInformation@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0 (_RtlQueryCriticalSectionOwner@8.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char *v1; // edx
  unsigned __int32 Value; // ecx
  int v3; // eax
  signed __int32 v4; // edx
  _UNKNOWN **v5; // esi
  _DWORD *v6; // edi
  char v7; // bl
  char *v8; // eax
  ULONG_PTR *v10; // [esp+0h] [ebp-50h]
  char Buffer[12]; // [esp+14h] [ebp-3Ch] BYREF
  void *v12; // [esp+20h] [ebp-30h]
  HANDLE v13; // [esp+24h] [ebp-2Ch]
  void *v14; // [esp+2Ch] [ebp-24h]
  unsigned int v15; // [esp+30h] [ebp-20h] BYREF
  void *v16; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]
  char v18; // [esp+5Ch] [ebp+Ch]

  v16 = 0;
  v1 = (char *)EventHandle;
  if ( !EventHandle )
    return 0;
  v15 = 0;
  Value = _InterlockedCompareExchange((volatile signed __int32 *)&RtlCriticalSectionLock, 17, 0);
  if ( Value )
  {
    while ( 1 )
    {
      v3 = (Value >> 1) & 1;
      if ( (Value & 1) != 0 && (v3 || (Value & 0xFFFFFFF0) == 0) )
        return 0;
      v4 = Value | 1;
      if ( !v3 )
        v4 += 16;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&RtlCriticalSectionLock, v4, Value) == Value )
      {
        v1 = (char *)EventHandle;
        break;
      }
      RtlBackoff(&v15);
      Value = RtlCriticalSectionLock.Value;
    }
  }
  ms_exc.registration.TryLevel = 0;
  v5 = (_UNKNOWN **)RtlCriticalSectionList;
  v6 = RtlCriticalSectionList;
  v14 = RtlCriticalSectionList;
  v7 = 0;
  while ( v5 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v5 - 4) )
    {
      v8 = (char *)*(v5 - 1);
      if ( !v18 || v1 == v8 + 4 )
      {
        if ( NtReadVirtualMemory((HANDLE)0xFFFFFFFF, v8, Buffer, 0x18uLL, v10) < 0 )
        {
          v1 = (char *)EventHandle;
        }
        else if ( v18 || (v1 = (char *)EventHandle, v13 == EventHandle) )
        {
          v16 = v12;
          break;
        }
      }
    }
    v5 = (_UNKNOWN **)*v5;
    if ( v5 == v6 )
      break;
    if ( v7 )
    {
      v6 = (_DWORD *)*v6;
      v14 = v6;
    }
    v7 ^= 1u;
  }
  ms_exc.registration.TryLevel = -2;
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v16;
}
