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

int __stdcall RtlQueryCriticalSectionOwner(int a1, char a2)
{
  int v2; // edx
  unsigned __int32 v3; // ecx
  int v4; // eax
  signed __int32 v5; // edx
  _UNKNOWN **v6; // esi
  _DWORD *v7; // edi
  char v8; // bl
  int v9; // eax
  _BYTE v11[12]; // [esp+14h] [ebp-3Ch] BYREF
  int v12; // [esp+20h] [ebp-30h]
  int v13; // [esp+24h] [ebp-2Ch]
  void *v14; // [esp+2Ch] [ebp-24h]
  unsigned int v15; // [esp+30h] [ebp-20h] BYREF
  int v16; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v16 = 0;
  v2 = a1;
  if ( !a1 )
    return 0;
  v15 = 0;
  v3 = _InterlockedCompareExchange(&RtlCriticalSectionLock, 17, 0);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = (v3 >> 1) & 1;
      if ( (v3 & 1) != 0 && (v4 || (v3 & 0xFFFFFFF0) == 0) )
        return 0;
      v5 = v3 | 1;
      if ( !v4 )
        v5 += 16;
      if ( _InterlockedCompareExchange(&RtlCriticalSectionLock, v5, v3) == v3 )
      {
        v2 = a1;
        break;
      }
      RtlBackoff(&v15);
      v3 = RtlCriticalSectionLock;
    }
  }
  ms_exc.registration.TryLevel = 0;
  v6 = (_UNKNOWN **)RtlCriticalSectionList;
  v7 = RtlCriticalSectionList;
  v14 = RtlCriticalSectionList;
  v8 = 0;
  while ( v6 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v6 - 4) )
    {
      v9 = (int)*(v6 - 1);
      if ( !a2 || v2 == v9 + 4 )
      {
        if ( NtReadVirtualMemory(-1, v9, (int)v11, 24, 0) < 0 )
        {
          v2 = a1;
        }
        else if ( a2 || (v2 = a1, v13 == a1) )
        {
          v16 = v12;
          break;
        }
      }
    }
    v6 = (_UNKNOWN **)*v6;
    if ( v6 == v7 )
      break;
    if ( v8 )
    {
      v7 = (_DWORD *)*v7;
      v14 = v7;
    }
    v8 ^= 1u;
  }
  ms_exc.registration.TryLevel = -2;
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v16;
}
