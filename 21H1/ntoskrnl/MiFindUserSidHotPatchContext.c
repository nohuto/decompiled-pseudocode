/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x1408C54FC
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x1408C53A0 (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x1408C9308 (MiQueryLoadedPatches.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408C9FC4 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     RtlHashBytes2 @ 0x1403F15C4 (RtlHashBytes2.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C4F0C (MiCompareUserSidHotPatchNodes.c)
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
