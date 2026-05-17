/*
 * XREFs of _RtlpHpSegMgrVaCtxAlloc@12 @ 0x4B37C5EC
 * Callers:
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

unsigned int __fastcall RtlpHpSegMgrVaCtxAlloc(int a1, int a2, char a3)
{
  int v3; // esi
  _DWORD **v4; // edi
  _DWORD *v5; // ebx
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // edx
  unsigned int v12; // [esp+10h] [ebp-8h]

  v3 = 0;
  v4 = (_DWORD **)(a1 + 96);
  if ( *(_DWORD *)(a1 + 92) || *v4 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 88));
    v5 = *v4;
    v6 = a1;
    if ( *v4 || (a3 & 2) == 0 && (v4 = (_DWORD **)(a1 + 92), (v5 = *(_DWORD **)(a1 + 92)) != 0) )
    {
      v7 = *((unsigned __int16 *)v5 - 1);
      _BitScanForward(&v8, v7);
      v12 = v8;
      LOWORD(v7) = v7 ^ (1 << v8);
      *((_WORD *)v5 - 1) = v7;
      if ( !(_WORD)v7 )
      {
        if ( *v4 )
          *v4 = (_DWORD *)**v4;
        *v5 = 0;
      }
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v6 + 88));
      v9 = (_DWORD *)dword_4B3A6E38[7 * *((unsigned __int8 *)v5 - 7)];
      return v9[1] + a2 * v12 + (((unsigned int)v5 - v9[5] - 8) >> v9[3] << 20);
    }
    else
    {
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 88));
    }
  }
  return v3;
}
