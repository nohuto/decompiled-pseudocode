/*
 * XREFs of CmpProcessLightWeightUOW @ 0x14065D5C8
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x14065D410 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14065D4F8 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140658008 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x1406580D0 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14065D320 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14065DC44 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14065DF64 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x14065E1EC (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14065E690 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x14065E730 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpReportNotify @ 0x14069EF78 (CmpReportNotify.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1409239EC (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140923C08 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140923D00 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409242A4 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  int v5; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v5 = a3;
  v13[0] = v13;
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 <= 7 )
  {
    if ( v8 == 7 )
    {
      if ( !(_DWORD)a3 )
      {
LABEL_26:
        v10 = CmpLightWeightPrepareSetKeyUserFlags(a1);
        goto LABEL_43;
      }
LABEL_13:
      if ( v5 == 1 )
        CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
      goto LABEL_47;
    }
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        if ( v8 == 2 )
        {
          if ( !(_DWORD)a3 )
          {
            v10 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
            goto LABEL_43;
          }
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, 1LL, v13);
          CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        }
        else if ( v8 != 3 )
        {
          if ( v8 > 3 )
          {
            if ( v8 > 5 )
            {
              if ( !(_DWORD)a3 )
              {
                v9 = CmpLightWeightPrepareDeleteValueKeyUoW(a1, (__int64)a2, a3, a4);
                if ( (v9 & 0x80000000) != 0 )
                  return v9;
                goto LABEL_26;
              }
              CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, (__int64)a4);
              ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))CmpReportNotify)(
                *(_QWORD *)(a1 + 48),
                0LL,
                4LL,
                v13);
              goto LABEL_13;
            }
            if ( !(_DWORD)a3 )
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
      }
LABEL_47:
      v9 = 0;
      CmpSignalDeferredPosts(v13);
      return v9;
    }
    if ( !(_DWORD)a3 )
    {
      v10 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
      goto LABEL_43;
    }
    CmpLightWeightCommitAddKeyUoW(a1, a2);
    goto LABEL_24;
  }
  if ( v8 == 8 )
    goto LABEL_47;
  if ( v8 == 9 )
  {
    if ( (_DWORD)a3 )
    {
      CmpLightWeightCommitSetSecDescUoW(a1, a2);
      v11 = 10LL;
      goto LABEL_46;
    }
    v10 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
  }
  else
  {
    if ( v8 <= 11 )
      goto LABEL_47;
    switch ( v8 )
    {
      case 12:
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
            CmpLightWeightCommitRenameKeyUoW(a1, a2, a4);
          goto LABEL_47;
        }
        v10 = CmpLightWeightPrepareRenameKeyUoW(a1, a2);
        break;
      case 13:
        goto LABEL_47;
      case 14:
        if ( (_DWORD)a3 )
        {
          CmpLightWeightCommitRecreateKeyUoW(a1, a2, (__int64)a4);
LABEL_24:
          v11 = 1LL;
LABEL_46:
          ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD *))CmpReportNotify)(*(_QWORD *)(a1 + 48), 0LL, v11, v13);
          goto LABEL_47;
        }
        v10 = CmpLightWeightPrepareRecreateKeyUoW(a1);
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
LABEL_43:
  v9 = v10;
  if ( v10 >= 0 )
    goto LABEL_47;
  return v9;
}
