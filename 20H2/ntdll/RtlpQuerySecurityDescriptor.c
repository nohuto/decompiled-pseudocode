/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x18006D3E8
 * Callers:
 *     RtlCopySecurityDescriptor @ 0x18006CFF0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x18006D0B0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x18006D290 (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180088D30 (RtlSelfRelativeToAbsoluteSD2.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpQuerySecurityDescriptor(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  unsigned int v9; // r10d
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rdx
  unsigned int *result; // rax

  v9 = 0;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( *(_DWORD *)(a1 + 4) )
      v10 = a1 + *(unsigned int *)(a1 + 4);
    else
      v10 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v10;
  if ( v10 )
    v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
  else
    v11 = 0;
  *a3 = v11;
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_31;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a1 + 16) )
    v12 = a1 + *(unsigned int *)(a1 + 16);
  else
LABEL_31:
    v12 = 0LL;
LABEL_8:
  *a6 = v12;
  if ( v12 )
    v13 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
  else
    v13 = 0;
  *a7 = v13;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      v14 = a1 + *(unsigned int *)(a1 + 8);
    else
      v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v14;
  if ( v14 )
    v15 = (4 * *(unsigned __int8 *)(v14 + 1) + 11) & 0xFFFFFFFC;
  else
    v15 = 0;
  *a5 = v15;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_15;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    if ( !*(_DWORD *)(a1 + 12) )
    {
LABEL_15:
      v16 = 0LL;
      goto LABEL_16;
    }
    v16 = a1 + *(unsigned int *)(a1 + 12);
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 24);
  }
LABEL_16:
  *a8 = v16;
  if ( v16 )
    v9 = (*(unsigned __int16 *)(v16 + 2) + 3) & 0xFFFFFFFC;
  result = a9;
  *a9 = v9;
  return result;
}
