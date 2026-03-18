/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C02A00F4
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C02A05C8 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C029EFF4 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C029F3E8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C029F6DC (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rbx
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v17 + 24) = 738LL;
    WdLogEvent5_WdAssertion(v17);
  }
  else
  {
    v18 = 0LL;
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                           (__int64)this,
                                           (unsigned int *)v2,
                                           (__int64)&v18);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v2 = (struct tagRECT *)&v18;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            v7 = WdLogNewEntry5_WdError(v6, v5);
            *(_QWORD *)(v7 + 24) = 775LL;
LABEL_11:
            WdLogEvent5_WdError(v7);
            return 0LL;
          }
          break;
        default:
          if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v2) )
          {
            v7 = WdLogNewEntry5_WdError(v10, v9);
            *(_QWORD *)(v7 + 24) = 790LL;
            goto LABEL_11;
          }
          return 1LL;
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
            *((_QWORD *)this + 9),
            (unsigned int)v2->left,
            (unsigned int)v2->top,
            (unsigned int)v2->right,
            v2->bottom);
    if ( !v13 )
    {
      v7 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v7 + 24) = 801LL;
      goto LABEL_11;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 9),
            2LL) )
    {
      v16 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v16 + 24) = 807LL;
      WdLogEvent5_WdError(v16);
      return v13;
    }
  }
  return 1LL;
}
