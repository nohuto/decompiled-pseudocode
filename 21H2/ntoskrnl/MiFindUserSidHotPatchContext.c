/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x14097339C
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x14097323C (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x140976F90 (MiQueryLoadedPatches.c)
 *     MiUnloadHotPatchForUserSid @ 0x140977CBC (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlHashBytes2 @ 0x1402AC180 (RtlHashBytes2.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140972C84 (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(void *a1)
{
  _QWORD *v1; // rbx
  ULONG v3; // eax
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)qword_140C533A8;
  if ( !qword_140C533A8 )
    return 0LL;
  v3 = RtlLengthSid(a1);
  v6[0] = RtlHashBytes2((const unsigned __int8 *)a1, v3, 0LL);
  v6[1] = a1;
  do
  {
    v4 = MiCompareUserSidHotPatchNodes(v6, (__int64)v1);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        break;
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      v1 = (_QWORD *)*v1;
    }
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
