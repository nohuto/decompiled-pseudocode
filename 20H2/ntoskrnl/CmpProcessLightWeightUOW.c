/*
 * XREFs of CmpProcessLightWeightUOW @ 0x1406A4414
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A1DE4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A1F14 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x1406A456C (CmpReportNotify.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406A45F8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14072D688 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14072E6CC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14072EAC4 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14072EF38 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140881628 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1408817B0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1408819A4 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140881BA4 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140881E9C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1408820F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1408825D0 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // r8
  _QWORD *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v13[0] = v13;
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 > 7 )
  {
    if ( v8 == 8 )
      goto LABEL_12;
    if ( v8 == 9 )
    {
      if ( a3 )
      {
        CmpLightWeightCommitSetSecDescUoW(a1, a2);
        v12 = 10LL;
        goto LABEL_15;
      }
      v9 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
    }
    else
    {
      if ( v8 <= 11 )
        goto LABEL_12;
      if ( v8 != 12 )
      {
        if ( v8 == 13 )
          goto LABEL_12;
        return (unsigned int)-1073741811;
      }
      if ( a3 )
      {
        if ( a3 == 1 )
          CmpLightWeightCommitRenameKeyUoW(a1, a2, a4);
        goto LABEL_12;
      }
      v9 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
    }
  }
  else
  {
    if ( v8 == 7 )
      goto LABEL_18;
    if ( v8 )
    {
      if ( v8 == 1 )
        goto LABEL_12;
      if ( v8 != 2 )
      {
        if ( v8 != 3 )
        {
          if ( v8 > 3 )
          {
            if ( v8 <= 5 )
            {
              if ( !a3 )
              {
                v9 = CmpLightWeightPrepareSetValueKeyUoW(a1, a2);
                goto LABEL_11;
              }
              CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
              v12 = 4LL;
LABEL_15:
              ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(
                *(_QWORD *)(a1 + 48),
                0LL,
                v12,
                v13);
              goto LABEL_12;
            }
            if ( !a3 )
            {
              v10 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
              if ( (v10 & 0x80000000) != 0 )
                return v10;
LABEL_28:
              v9 = CmpLightWeightPrepareSetKeyUserFlags(a1);
              goto LABEL_11;
            }
            CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(
              *(_QWORD *)(a1 + 48),
              0LL,
              4LL,
              v13);
LABEL_18:
            if ( a3 )
            {
              if ( a3 == 1 )
                CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
              goto LABEL_12;
            }
            goto LABEL_28;
          }
          return (unsigned int)-1073741811;
        }
LABEL_12:
        v10 = 0;
        CmpSignalDeferredPosts(v13);
        return v10;
      }
      if ( a3 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD **))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, 1LL, v13);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        goto LABEL_12;
      }
      v9 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
    }
    else
    {
      if ( a3 )
      {
        CmpLightWeightCommitAddKeyUoW(a1, a2);
        v12 = 1LL;
        goto LABEL_15;
      }
      v9 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
    }
  }
LABEL_11:
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_12;
  return v10;
}
