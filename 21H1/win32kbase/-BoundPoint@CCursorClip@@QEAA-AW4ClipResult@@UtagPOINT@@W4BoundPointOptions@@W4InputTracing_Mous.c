/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C00A6260
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C00A6310 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x1C00A64C4 (-ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C01A57D0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 */

__int64 __fastcall CCursorClip::BoundPoint(
        _DWORD *a1,
        struct tagPOINT a2,
        unsigned int a3,
        int a4,
        struct tagPOINT *a5)
{
  struct tagPOINT *v9; // r14
  unsigned int v10; // r15d
  LONG y; // ecx
  LONG x; // edx
  int v14; // esi
  const char *v15; // rax
  LONG v16; // [rsp+60h] [rbp-10h] BYREF
  LONG v17; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+50h] BYREF

  v20 = (__int64)a2;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 8));
  v9 = a5;
  v10 = 0;
  *a5 = a2;
  if ( (a3 & 2) == 0 )
  {
    v10 = CCursorClip::ApplyAppClip((CCursorClip *)a1, a2, v9);
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::ApplySystemClips)(
                            a1,
                            *v9,
                            a3,
                            v9) )
      v10 = 2;
  }
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 64LL) )
  {
    y = v9->y;
    x = v9->x;
    LODWORD(v21) = a1[18];
    LODWORD(a5) = a3;
    if ( a4 )
    {
      v14 = a4 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          v15 = "ActiveCursorTracking";
        else
          v15 = "UNKNOWN";
      }
      else
      {
        v15 = "SetCursorPos";
      }
    }
    else
    {
      v15 = "MouseInput";
    }
    v18 = (__int64)v15;
    LODWORD(v20) = HIDWORD(v20);
    LODWORD(v19) = y;
    v16 = x;
    v17 = a2.x;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C024C960,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&a5,
      (__int64)&v21);
  }
  CPushLock::ReleaseLock((CPushLock *)(a1 + 8));
  return v10;
}
