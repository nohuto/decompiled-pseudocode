/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C000AF64
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C000AEF0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C002F100 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019D924 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019DA60 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     SendAppClipChanged @ 0x1C000B050 (SendAppClipChanged.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00B9044 (ApiSetEditionInternalSetCursorPos.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C019D4DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall CCursorClip::UpdateClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 left; // r9
  __int64 right; // r8
  LONG top; // ecx
  LONG v6; // eax
  LONG bottom; // r10d
  LONG v8; // eax
  LONG v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  struct tagRECT v14; // [rsp+40h] [rbp-18h] BYREF
  LONG v15; // [rsp+60h] [rbp+8h] BYREF
  LONG v16; // [rsp+68h] [rbp+10h] BYREF
  LONG v17; // [rsp+70h] [rbp+18h] BYREF
  LONG v18; // [rsp+78h] [rbp+20h] BYREF

  left = (unsigned int)this->left;
  right = (unsigned int)this->right;
  top = this->top;
  if ( (int)left <= a2->left )
    left = (unsigned int)a2->left;
  v6 = a2->right;
  bottom = this->bottom;
  if ( (int)right >= v6 )
    right = (unsigned int)v6;
  a2->left = left;
  v8 = a2->top;
  a2->right = right;
  if ( top <= v8 )
    top = v8;
  v9 = a2->bottom;
  a2->top = top;
  if ( bottom >= v9 )
    bottom = v9;
  a2->bottom = bottom;
  if ( (int)left > (int)right || top > bottom )
    *a2 = *this;
  this[1] = *a2;
  if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, right, left) )
  {
    v15 = this[1].bottom;
    v16 = this[1].right;
    v17 = this[1].top;
    v18 = this[1].left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C0244A70,
      (unsigned int)&unk_1C0218128,
      v12,
      v13,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  v10 = *(_QWORD *)&this[1].left;
  v14 = 0LL;
  v11 = v10 - *(_QWORD *)&this->left;
  if ( !v11 )
    v11 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v11 )
    v14 = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  SendAppClipChanged(&v14);
  ApiSetEditionInternalSetCursorPos(*((unsigned int *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
}
