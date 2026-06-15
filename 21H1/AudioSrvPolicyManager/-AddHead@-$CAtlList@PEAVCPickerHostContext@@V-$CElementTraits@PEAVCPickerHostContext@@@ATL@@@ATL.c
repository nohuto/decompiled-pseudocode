/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180027B74
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180027010 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rdi
  int v5; // r9d
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 *i; // rcx
  __int64 v11; // rcx
  __int64 *result; // rax

  v2 = (__int64 *)qword_180055770;
  v4 = PickerHostContextManager::s_PickerHostContextList;
  if ( qword_180055770 )
    goto LABEL_12;
  v5 = qword_180055778;
  if ( (_DWORD)qword_180055778 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)qword_180055778 < 0x18 )
    {
      v8 = 0LL;
      goto LABEL_9;
    }
    v6 = 24LL * (unsigned int)qword_180055778;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = malloc(v6 + 8);
  v8 = v7;
  if ( !v7 )
    goto LABEL_16;
  *v7 = qword_180055768;
  v5 = qword_180055778;
  v2 = (__int64 *)qword_180055770;
  qword_180055768 = (__int64)v7;
LABEL_9:
  if ( !v8 )
LABEL_16:
    ATL::AtlThrowImpl(-2147024882);
  v9 = v5 - 1;
  for ( i = &v8[2 * (v5 - 1) + 1 + (unsigned int)(v5 - 1)]; v9 >= 0; --v9 )
  {
    *i = (__int64)v2;
    v2 = i;
    qword_180055770 = (__int64)i;
    i -= 3;
  }
LABEL_12:
  v11 = *v2;
  v2[2] = *a2;
  qword_180055770 = v11;
  v2[1] = 0LL;
  *v2 = v4;
  ++qword_180055760;
  if ( PickerHostContextManager::s_PickerHostContextList )
    *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v2;
  else
    qword_180055758 = (__int64)v2;
  result = v2;
  PickerHostContextManager::s_PickerHostContextList = (__int64)v2;
  return result;
}
