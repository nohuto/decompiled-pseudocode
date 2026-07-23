/*
 * XREFs of MiCreateSessionDriverProtos @ 0x1408DA938
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A5A28 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiDeleteSessionDriverProtos @ 0x1407797E8 (MiDeleteSessionDriverProtos.c)
 */

__int64 __fastcall MiCreateSessionDriverProtos(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  ULONG i; // ebp
  __int64 v11; // r15
  __int16 v12; // cx
  unsigned __int64 *v13; // rax
  unsigned __int64 *v14; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v16[10]; // [rsp+40h] [rbp-98h] BYREF

  v15 = a3;
  memset(v16, 0, sizeof(v16));
  v5 = *a1;
  v14 = 0LL;
  if ( (*(_WORD *)(v5 + 12) & 0x800) != 0 )
    return 1LL;
  v6 = a2 - *(_QWORD *)(v5 + 32);
  if ( (int)MiMapImageInSystemSpace(a1, 3, (__int64)v16) < 0 )
    return 0LL;
  v8 = v16[0];
  v9 = (__int64)(a1 + 16);
  for ( i = 0; ; i += v11 )
  {
    if ( !v9 )
    {
      MiUnmapImageInSystemSpace(v16);
      *(_WORD *)(v5 + 12) |= 0x800u;
      return 1LL;
    }
    v11 = *(unsigned int *)(v9 + 44);
    v12 = *(_WORD *)(v9 + 32) >> 1;
    if ( (v12 & 4) == 0 && ((MiFlags & 0x8000) != 0 || (MiFlags & 0x10000) == 0 || (v12 & 2) == 0) )
      break;
LABEL_12:
    v9 = *(_QWORD *)(v9 + 16);
    v8 += v11 << 12;
  }
  if ( (int)MiAllocatePerSessionProtos(v9, v8, i, v6, &v14) >= 0 )
  {
    v13 = v14;
    *((_DWORD *)v14 + 16) = 0;
    *v13 = a2;
    *(_QWORD *)(v9 + 24) = v13;
    if ( v15 )
      RtlClearBits(*(PRTL_BITMAP *)(v15 + 40), i, *(_DWORD *)(v9 + 44));
    goto LABEL_12;
  }
  MiUnmapImageInSystemSpace(v16);
  MiDeleteSessionDriverProtos(a1);
  return 0LL;
}
