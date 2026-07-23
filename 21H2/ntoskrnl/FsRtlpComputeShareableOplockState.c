/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x1402AAA80
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14022BD50 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F0678 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckUpperOplock @ 0x14088BA10 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // r10
  _QWORD *v3; // r11
  int v4; // r9d
  __int64 result; // rax
  __int64 *v6; // r10
  int v7; // edx
  char v8; // dl
  char v9; // bl
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 144);
  v2 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(a1 + 40);
  v4 = v1 & 0x1010000;
  if ( v3 != (_QWORD *)(a1 + 40) )
    goto LABEL_14;
  if ( *(_QWORD *)(a1 + 56) != a1 + 56 || *(_QWORD *)(a1 + 72) != a1 + 72 )
  {
    if ( v3 == v2 )
    {
LABEL_4:
      if ( *(_QWORD *)(a1 + 56) != a1 + 56 )
        goto LABEL_5;
      if ( v3 == v2 )
      {
        v6 = *(__int64 **)(a1 + 72);
        v7 = 0;
        v1 = v1 & 0x20 | 0x3000;
        *(_DWORD *)(a1 + 144) = v1;
        if ( v6 == (__int64 *)(a1 + 72) )
          goto LABEL_6;
        while ( !v7 || (v6[6] & 0xF00000) == v7 )
        {
          v7 = v6[6] & 0xF00000;
          v1 = *(_DWORD *)(a1 + 144) | v7;
          *(_DWORD *)(a1 + 144) = v1;
          v6 = (__int64 *)*v6;
          if ( v6 == (__int64 *)(a1 + 72) )
            goto LABEL_6;
        }
LABEL_5:
        v1 = v1 & 0x20 | 0x3000;
LABEL_6:
        result = v4 | (unsigned int)v1;
        *(_DWORD *)(a1 + 144) = result;
        return result;
      }
LABEL_17:
      v8 = 0;
      v9 = 0;
      do
      {
        if ( *(_DWORD *)(v3[2] + 24LL) == 590400 )
        {
          v8 = 1;
          if ( v9 )
            goto LABEL_20;
        }
        else
        {
          v9 = 1;
          if ( v8 )
            goto LABEL_20;
        }
        v3 = (_QWORD *)*v3;
      }
      while ( v3 != v2 );
      if ( v8 && v9 )
      {
LABEL_20:
        v1 = v1 & 0x20 | 0x1010;
        goto LABEL_6;
      }
      v10 = v1 & 0x20;
      if ( v8 )
        v1 = v10 | 0x1000;
      else
        v1 = v10 | 0x10;
      goto LABEL_6;
    }
LABEL_14:
    if ( *(_QWORD *)(a1 + 56) != a1 + 56 || *(_QWORD *)(a1 + 72) != a1 + 72 )
    {
      v1 = v1 & 0x20 | 0xB000;
      goto LABEL_6;
    }
    if ( v3 != v2 )
      goto LABEL_17;
    goto LABEL_4;
  }
  result = v4 | v1 & 0x20 | 1u;
  *(_DWORD *)(a1 + 144) = result;
  return result;
}
