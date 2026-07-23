/*
 * XREFs of MiQueryLeafPte @ 0x140547260
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnProtection @ 0x14025EC28 (MiGetPfnProtection.c)
 *     MiHyperSpaceSize @ 0x14031CC88 (MiHyperSpaceSize.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIdentifyPfnWrapper @ 0x140353EE0 (MiIdentifyPfnWrapper.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v4; // r11d
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v23; // rbx
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a3;
  v5 = a2;
  v6 = (__int64)(a2 << 25) >> 16;
  if ( (v6 < qword_140C4E3A0 || v6 >= qword_140C4E3A0 + MiHyperSpaceSize()) && v4 < 1 )
  {
    v24 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v24 & 1) != 0 )
    {
      v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24) >> 12) & 0xFFFFFFFFFLL)
         - 0x58000000000LL;
      if ( (*(_DWORD *)v3 & 1) != 0 )
      {
        v8 = *(_QWORD *)(v3 + 16) + 1LL;
        *(_QWORD *)(v3 + 16) = v8;
        if ( v8 < *(_QWORD *)(v3 + 24) )
        {
          v9 = *(_QWORD *)(v3 + 8);
          *(_QWORD *)(v9 + 8 * v8 - 8) = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)*(_QWORD *)(v9 + 8 * v8 - 8)) & 0xFFF;
          *(_QWORD *)(v9 + 8 * v8 - 8) ^= (*(_DWORD *)(v9 + 8 * v8 - 8) ^ (*((_DWORD *)MiSearchNumaNodeTable((v7 + 0x58000000000LL) / 48)
                                                                           + 2) << 9)) & 0xE00;
          v10 = MI_PFN_IS_PROTO(v7);
          *(_QWORD *)(v9 + 8 * v8 - 8) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v10 << 8)) & 0x100;
          if ( MI_PFN_IS_PROTO(v12) )
          {
            if ( (*(_DWORD *)v3 & 2) != 0 )
            {
              v15 = v14 & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
            }
            else
            {
              LOBYTE(v16) = 7;
              if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v16 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v13 = (unsigned __int8)(v14 ^ (32 * v16)) & 0xE0;
              v15 = v13 ^ v14;
            }
            *(_QWORD *)(v9 + 8 * v8 - 8) = v15;
            v17 = *(_QWORD *)(v9 + 8 * v8 - 8) ^ (*(_DWORD *)(v9 + 8 * v8 - 8) ^ (unsigned int)MiGetPfnProtection(
                                                                                                 v13,
                                                                                                 v6,
                                                                                                 v7)) & 0x1F;
          }
          else
          {
            v18 = v14 & 0xFFFFFFFFFFFFFF1FuLL;
            *(_QWORD *)(v9 + 8 * v8 - 8) = v18;
            v17 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v7 + 16) >> 5)) & 0x1F;
          }
          *(_QWORD *)(v9 + 8 * v8 - 8) = v17;
          return 0LL;
        }
        return 4LL;
      }
      if ( MI_PFN_IS_PROTO(v7) )
      {
        v21 = *(_QWORD *)(v3 + 16) + 1LL;
        *(_QWORD *)(v3 + 16) = v21;
        if ( v21 >= *(_QWORD *)(v3 + 24) )
          return 4LL;
        v23 = 32 * v21 + *(_QWORD *)(v3 + 8);
        MiIdentifyPfnWrapper(v7, v23 - 32, v19, v20);
        *(_QWORD *)(v23 - 8) = v6;
      }
    }
  }
  return 0LL;
}
