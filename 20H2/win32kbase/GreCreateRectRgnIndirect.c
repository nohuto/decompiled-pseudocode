/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C003DA50
 * Callers:
 *     UserValidateCopyRgn @ 0x1C001F990 (UserValidateCopyRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C001FA90 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C001FAE0 (CreateEmptyRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C003EE60 (SetOrCreateRectRgnIndirectPublic.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C014021C (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  struct HOBJ__ *inserted; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  void *v8; // rbp
  __int64 v9; // rax
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (a1->top & 0xF8000000) != 0 && (a1->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  inserted = 0LL;
  v15 = 0;
  if ( gpTypeIsolation[7] )
  {
    v6 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
    if ( !v6 )
      goto LABEL_13;
    v8 = RGNMEMOBJ::s_pSCANLookAsideList;
    if ( qword_1C0250C50 && (int)qword_1C0250C50(v5, v4, v7) >= 0 && qword_1C0250C58 )
      v9 = qword_1C0250C58(v8);
    else
      v9 = 0LL;
    *(_QWORD *)(v6 + 88) = v9;
    if ( v9 )
      goto LABEL_13;
    REGION::vDeleteREGION((REGION *)v6);
  }
  v6 = 0LL;
LABEL_13:
  v14 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 24) = 112LL;
    *(_DWORD *)(v6 + 80) = 0;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 56) = v6 + 48;
    *(_QWORD *)(v6 + 48) = v6 + 48;
    left = a1->left;
    right = a1->right;
    if ( a1->left > right )
    {
      a1->left = right;
      a1->right = left;
    }
    top = a1->top;
    bottom = a1->bottom;
    if ( top > bottom )
    {
      a1->top = bottom;
      a1->bottom = top;
    }
    RGNOBJ::vSet((RGNOBJ *)&v14, a1);
    inserted = HmgInsertObjectInternal((struct OBJECT *)v6, 1u, 4u);
    if ( inserted )
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    else
      REGION::vDeleteREGION((REGION *)v6);
  }
  else
  {
    EngSetLastError(8u);
  }
  return inserted;
}
