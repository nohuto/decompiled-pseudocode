/*
 * XREFs of CmpProcessLightWeightUOW @ 0x1406A3E64
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A3444 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A3574 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x1405CD7BC (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1405CD868 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x1406A405C (CmpReportNotify.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406A40E8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4248 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1407319B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14073293C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x140732E34 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140733184 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14087EB4C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087ECD4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087EEC4 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087F0BC (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F3B4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F610 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F7C4 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087FAF0 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  _QWORD *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v13[0] = v13;
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 > 7 )
  {
    if ( v8 == 8 )
      goto LABEL_47;
    if ( v8 == 9 )
    {
      if ( !a3 )
      {
        v10 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
        goto LABEL_43;
      }
      CmpLightWeightCommitSetSecDescUoW(a1, a2);
      v11 = 10LL;
LABEL_46:
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, v11, v13);
      goto LABEL_47;
    }
    if ( v8 <= 11 )
      goto LABEL_47;
    if ( v8 == 12 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW(a1, a2, a4);
        goto LABEL_47;
      }
      v10 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
      goto LABEL_43;
    }
    if ( v8 == 13 )
      goto LABEL_47;
    if ( v8 != 14 )
      return (unsigned int)-1073741811;
    if ( !a3 )
    {
      v10 = CmpLightWeightPrepareRecreateKeyUoW(a1);
      goto LABEL_43;
    }
    CmpLightWeightCommitRecreateKeyUoW(a1, a2, a4);
LABEL_24:
    v11 = 1LL;
    goto LABEL_46;
  }
  switch ( v8 )
  {
    case 7:
      goto LABEL_13;
    case 0:
      if ( !a3 )
      {
        v10 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
        goto LABEL_43;
      }
      CmpLightWeightCommitAddKeyUoW(a1, a2);
      goto LABEL_24;
    case 1:
      goto LABEL_47;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      if ( v8 > 3 )
      {
        if ( v8 > 5 )
        {
          if ( !a3 )
          {
            v9 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
            if ( (v9 & 0x80000000) != 0 )
              return v9;
            goto LABEL_14;
          }
          CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(
            *(_QWORD *)(a1 + 48),
            0LL,
            4LL,
            v13);
LABEL_13:
          if ( a3 )
          {
            if ( a3 == 1 )
              CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
            goto LABEL_47;
          }
LABEL_14:
          v10 = CmpLightWeightPrepareSetKeyUserFlags(a1);
          goto LABEL_43;
        }
        if ( !a3 )
        {
          v10 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
          goto LABEL_43;
        }
        CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
        v11 = 4LL;
        goto LABEL_46;
      }
      return (unsigned int)-1073741811;
    }
LABEL_47:
    v9 = 0;
    CmpSignalDeferredPosts(v13);
    return v9;
  }
  if ( a3 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, 1LL, v13);
    CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
    goto LABEL_47;
  }
  v10 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
LABEL_43:
  v9 = v10;
  if ( v10 >= 0 )
    goto LABEL_47;
  return v9;
}
