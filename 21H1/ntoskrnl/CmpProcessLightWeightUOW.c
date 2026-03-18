/*
 * XREFs of CmpProcessLightWeightUOW @ 0x140658270
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406583C8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406584F8 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140658030 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpReportNotify @ 0x1406581E4 (CmpReportNotify.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071D9B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14071E93C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14071ED34 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14071F084 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14087A794 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087A91C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14087AD10 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087AFF4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087B250 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14087B728 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  int v5; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // r8
  _QWORD *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v5 = a3;
  v13[0] = v13;
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 > 7 )
  {
    if ( v8 == 8 )
      goto LABEL_12;
    if ( v8 == 9 )
    {
      if ( (_DWORD)a3 )
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
      if ( (_DWORD)a3 )
      {
        if ( (_DWORD)a3 == 1 )
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
              if ( !(_DWORD)a3 )
              {
                v9 = CmpLightWeightPrepareSetValueKeyUoW(a1, (__int64)a2, a3, a4);
                goto LABEL_11;
              }
              CmpLightWeightCommitSetValueKeyUoW((__int64 *)a1, a2);
              v12 = 4LL;
LABEL_15:
              CmpReportNotify(*(_QWORD *)(a1 + 48), 0, v12, (struct _LOOKASIDE_LIST_EX *)v13);
              goto LABEL_12;
            }
            if ( !(_DWORD)a3 )
            {
              v10 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, a2);
              if ( (v10 & 0x80000000) != 0 )
                return v10;
LABEL_28:
              v9 = CmpLightWeightPrepareSetKeyUserFlags(a1);
              goto LABEL_11;
            }
            CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
            CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 4LL, (struct _LOOKASIDE_LIST_EX *)v13);
LABEL_18:
            if ( v5 )
            {
              if ( v5 == 1 )
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
      if ( (_DWORD)a3 )
      {
        CmpReportNotify(*(_QWORD *)(a1 + 48), 0, 1LL, (struct _LOOKASIDE_LIST_EX *)v13);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        goto LABEL_12;
      }
      v9 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
    }
    else
    {
      if ( (_DWORD)a3 )
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
