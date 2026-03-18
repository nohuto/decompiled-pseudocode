/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00A458C
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C00A4518 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C00A6520 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01A5A24 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01A5B60 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ApiSetEditionInternalSetCursorPos @ 0x1C004B81C (ApiSetEditionInternalSetCursorPos.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     SendAppClipChanged @ 0x1C00A4670 (SendAppClipChanged.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1C01A573C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall CCursorClip::UpdateClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r9d
  LONG right; // r8d
  LONG top; // ecx
  LONG bottom; // r10d
  LONG v7; // eax
  LONG v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  struct tagRECT v13; // [rsp+40h] [rbp-18h] BYREF
  LONG v14; // [rsp+60h] [rbp+8h] BYREF
  LONG v15; // [rsp+68h] [rbp+10h] BYREF
  LONG v16; // [rsp+70h] [rbp+18h] BYREF
  LONG v17; // [rsp+78h] [rbp+20h] BYREF

  left = this->left;
  right = this->right;
  top = this->top;
  if ( left <= a2->left )
    left = a2->left;
  bottom = this->bottom;
  if ( right >= a2->right )
    right = a2->right;
  a2->left = left;
  v7 = a2->top;
  a2->right = right;
  if ( top <= v7 )
    top = v7;
  v8 = a2->bottom;
  a2->top = top;
  if ( bottom >= v8 )
    bottom = v8;
  a2->bottom = bottom;
  if ( left > right || top > bottom )
    *a2 = *this;
  this[1] = *a2;
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 64LL) )
  {
    v14 = this[1].bottom;
    v15 = this[1].right;
    v16 = this[1].top;
    v17 = this[1].left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C024C960,
      (unsigned int)&unk_1C021FB07,
      v11,
      v12,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  v9 = *(_QWORD *)&this[1].left;
  v13 = 0LL;
  v10 = v9 - *(_QWORD *)&this->left;
  if ( !v10 )
    v10 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v10 )
    v13 = this[1];
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
  SendAppClipChanged(&v13);
  ApiSetEditionInternalSetCursorPos(*((_DWORD *)gpsi + 1240), *((_DWORD *)gpsi + 1241), 2u);
  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
}
