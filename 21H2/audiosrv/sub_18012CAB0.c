/*
 * XREFs of sub_18012CAB0 @ 0x18012CAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012CAB0(__int64 a1, char a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v7 = -2004286976;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    v10 = *(_DWORD *)(a1 + 124);
    v11 = 0LL;
    if ( v10 )
    {
      v12 = *(_QWORD *)(a1 + 128);
      while ( *(_BYTE *)(v12 + 2 * v11) != a2 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v10 )
          return v7;
      }
      v7 = 0;
      *a3 = *(unsigned __int8 *)(v12 + 2 * v11 + 1);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v14) = -2147024809;
      v16 = (__int64)"SpatialAudioMetadataDictionary::GetCommandValueLength";
      LODWORD(v15) = 281;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v8,
        v9,
        (const CHAR **)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
