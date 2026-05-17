/*
 * XREFs of _RtlpHpSegMgrVaCtxFree@12 @ 0x4B37C6A4
 * Callers:
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 */

unsigned int __fastcall RtlpHpSegMgrVaCtxFree(int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // esi
  unsigned int v6; // edi
  unsigned __int16 *v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  _DWORD *v11; // edx
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  unsigned __int16 *v14; // ecx
  unsigned int result; // eax
  int v16; // [esp-8h] [ebp-28h]
  int v17; // [esp-4h] [ebp-24h]
  unsigned __int16 *v18; // [esp+10h] [ebp-10h] BYREF
  unsigned int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]

  v4 = 0;
  v17 = *(_DWORD *)(a1 + 32);
  v16 = *(_DWORD *)(a1 + 28);
  v19 = a2 & 0xFFE00000;
  RtlpHpQueryVA(a2 & 0xFFE00000, &v18, 0, v16, v17);
  v6 = (a2 - v19) / *a3;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 88));
  v7 = v18;
  v8 = (unsigned __int16)(v18[1] ^ (1 << v6));
  v18[1] = v8;
  v9 = *v7;
  v21 = v8;
  v20 = v8;
  v10 = v9 >> 15;
  if ( v8 == (1 << (0x200000u / *a3)) - 1 )
  {
    v11 = v18 + 2;
    if ( *((_DWORD *)v18 + 1) != -1 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD **)(a1 + 4 * v10 + 92);
        if ( !v12 )
          NT_ASSERT("Link != ((void *)0)");
        *(_DWORD *)(a1 + 4 * v10 + 92) = *v12;
        if ( v12 == v11 )
          break;
        *v12 = v4;
        v4 = v12;
      }
      while ( 1 )
      {
        v13 = v4;
        if ( !v4 )
          break;
        v4 = (_DWORD *)*v4;
        *v13 = *(_DWORD *)(a1 + 4 * v10 + 92);
        *(_DWORD *)(a1 + 4 * v10 + 92) = v13;
      }
    }
  }
  else
  {
    if ( ((unsigned __int16)(v8 - 1) & (unsigned __int16)v21) == 0 )
    {
      v14 = v18 + 2;
      *((_DWORD *)v18 + 1) = *(_DWORD *)(a1 + 4 * v10 + 92);
      *(_DWORD *)(a1 + 4 * v10 + 92) = v14;
    }
    v19 = 0;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 88));
  result = v19;
  if ( v19 )
    *a3 = 0x200000;
  return result;
}
