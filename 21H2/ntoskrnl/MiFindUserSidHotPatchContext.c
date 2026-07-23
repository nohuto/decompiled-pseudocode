/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x1408C9FAC
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9E50 (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x1408CDDB8 (MiQueryLoadedPatches.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408CEA74 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     RtlHashBytes2 @ 0x1403F8A54 (RtlHashBytes2.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C99BC (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(void *a1)
{
  _QWORD *v1; // rbx
  ULONG v3; // eax
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)MiUserSidPatchLists;
  if ( !MiUserSidPatchLists )
    return 0LL;
  v3 = RtlLengthSid(a1);
  v6[0] = RtlHashBytes2((const unsigned __int8 *)a1, v3);
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
