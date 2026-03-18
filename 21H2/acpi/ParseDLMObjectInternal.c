/*
 * XREFs of ParseDLMObjectInternal @ 0x1C0066C60
 * Callers:
 *     PerformDLMObjectBindings @ 0x1C0066E9C (PerformDLMObjectBindings.c)
 * Callees:
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v4; // r13
  char v8; // r15
  unsigned int v9; // edi
  unsigned int NameSpaceObject; // eax
  __int64 v11; // rbx
  __int16 v12; // ax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+38h] [rbp-C8h]
  signed __int64 v27; // [rsp+48h] [rbp-B8h]
  _OWORD v28[15]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+160h] [rbp+60h] BYREF

  v4 = (struct _SLIST_ENTRY *)gpheapGlobal;
  memset(v28, 0, 0xC0uLL);
  v24 = 0LL;
  v8 = 0;
  v29 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32), a2, (__int64 *)&v29, 0);
  v9 = NameSpaceObject;
  if ( NameSpaceObject )
  {
    v11 = 0LL;
    if ( NameSpaceObject == -1072431089 )
      goto LABEL_20;
  }
  else
  {
    v11 = *(_QWORD *)(v29 + 96);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 0, 0) )
    {
      if ( !a4 )
        goto LABEL_16;
      v12 = *(_WORD *)(a4 + 2);
      if ( v12 == 3 )
        goto LABEL_12;
      if ( v12 == 2 && !(unsigned int)GetNameSpaceObject(*(_BYTE **)(a4 + 32), a2, (__int64 *)&v24, 0) )
      {
        a4 = v24 + 64;
        if ( *(_WORD *)(v24 + 66) == 3 )
        {
          if ( v24 != -64LL )
          {
LABEL_12:
            v13 = *(_OWORD *)(v11 + 16);
            v28[0] = *(_OWORD *)v11;
            v14 = *(_OWORD *)(v11 + 32);
            v28[1] = v13;
            v15 = *(_OWORD *)(v11 + 48);
            v28[2] = v14;
            v16 = *(_OWORD *)(v11 + 64);
            v28[3] = v15;
            v17 = *(_OWORD *)(v11 + 80);
            v28[4] = v16;
            v18 = *(_OWORD *)(v11 + 96);
            v28[5] = v17;
            v19 = *(_OWORD *)(v11 + 128);
            v28[6] = v18;
            v28[7] = *(_OWORD *)(v11 + 112);
            v20 = *(_OWORD *)(v11 + 144);
            v28[8] = v19;
            v21 = *(_OWORD *)(v11 + 160);
            v28[9] = v20;
            v22 = *(_OWORD *)(v11 + 176);
            v28[10] = v21;
            v28[11] = v22;
            if ( !(unsigned int)DupObjData(v4, (__int64)&v25, a4) )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 72), v27, 0LL) )
              {
                v8 = 1;
              }
              else
              {
                *(_OWORD *)(v11 + 40) = v25;
                *(_OWORD *)(v11 + 56) = v26;
                *(_QWORD *)(v11 + 72) = v27;
                _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 2, 0);
              }
            }
            goto LABEL_17;
          }
LABEL_16:
          _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 1, 0);
LABEL_17:
          v9 = 0;
          if ( v8 )
            FreeDataBuffs((__int64)&v25, 1u);
          goto LABEL_22;
        }
      }
      v9 = -1072431089;
LABEL_20:
      if ( v11 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 1, 0);
        v9 = 0;
      }
    }
  }
LABEL_22:
  if ( v29 )
    DereferenceObjectEx(v29);
  if ( v24 )
    DereferenceObjectEx(v24);
  return v9;
}
