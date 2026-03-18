/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1C0010BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0010C80 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x1C0010E34 (-ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@33@Z @ 0x1C019FA70 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 */

__int64 __fastcall CCursorClip::BoundPoint(
        _DWORD *a1,
        struct tagPOINT a2,
        unsigned int a3,
        int a4,
        struct tagPOINT *a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagPOINT *v11; // r14
  unsigned int v12; // r15d
  LONG y; // ecx
  LONG x; // edx
  int v16; // esi
  const char *v17; // rax
  LONG v18; // [rsp+60h] [rbp-10h] BYREF
  LONG v19; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+50h] BYREF

  v22 = (__int64)a2;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 8));
  v11 = a5;
  v12 = 0;
  *a5 = a2;
  if ( (a3 & 2) == 0 )
  {
    v12 = CCursorClip::ApplyAppClip((CCursorClip *)a1, a2, v11);
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::ApplySystemClips)(
                            a1,
                            *v11,
                            a3,
                            v11) )
      v12 = 2;
  }
  if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 64LL, v9, v10) )
  {
    y = v11->y;
    x = v11->x;
    LODWORD(v23) = a1[18];
    LODWORD(a5) = a3;
    if ( a4 )
    {
      v16 = a4 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
          v17 = "ActiveCursorTracking";
        else
          v17 = "UNKNOWN";
      }
      else
      {
        v17 = "SetCursorPos";
      }
    }
    else
    {
      v17 = "MouseInput";
    }
    v20 = (__int64)v17;
    LODWORD(v22) = HIDWORD(v22);
    LODWORD(v21) = y;
    v18 = x;
    v19 = a2.x;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C0246A70,
      (__int64)&v19,
      (__int64)&v22,
      (__int64)&v18,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&a5,
      (__int64)&v23);
  }
  CPushLock::ReleaseLock((CPushLock *)(a1 + 8));
  return v12;
}
