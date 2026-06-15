/*
 * XREFs of sub_18002D14C @ 0x18002D14C
 * Callers:
 *     sub_1800059B0 @ 0x1800059B0 (sub_1800059B0.c)
 *     sub_180007B80 @ 0x180007B80 (sub_180007B80.c)
 *     sub_180007D20 @ 0x180007D20 (sub_180007D20.c)
 *     sub_180008630 @ 0x180008630 (sub_180008630.c)
 *     sub_1800166BC @ 0x1800166BC (sub_1800166BC.c)
 *     PbmSetSmtcSubscriptionState @ 0x180023590 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18002D3E8 @ 0x18002D3E8 (sub_18002D3E8.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002D14C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  ULONG_PTR v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  signed int LastError; // eax
  signed int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BYTE v18[56]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v22; // [rsp+88h] [rbp+10h]

  v2 = sub_180039DDC(24LL, &unk_18004FFC8);
  try
  {
    v3 = v2;
    if ( v2 )
    {
      v19 = 0LL;
      v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
      if ( v4 )
        v19 = (**v4)(v4, v18);
      v5 = sub_18002D3E8(v3, v18);
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      if ( PostQueuedCompletionStatus(CompletionPort, 0, v5, 0LL) )
      {
        v12 = 0;
      }
      else
      {
        LastError = GetLastError();
        v12 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v12 = LastError;
      }
      if ( v12 >= 0 )
      {
        v15 = *(_QWORD *)(a1 + 56);
        if ( v15 )
        {
          LOBYTE(v10) = v15 != a1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v10);
          *(_QWORD *)(a1 + 56) = 0LL;
        }
        result = 0LL;
      }
      else
      {
        sub_180003AB0(
          retaddr,
          1049,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
          v12);
        (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
        v14 = *(_QWORD *)(a1 + 56);
        if ( v14 )
        {
          LOBYTE(v13) = v14 != a1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
          *(_QWORD *)(a1 + 56) = 0LL;
        }
        result = (unsigned int)v12;
      }
    }
    else
    {
      sub_180003AB0(
        retaddr,
        1047,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
        -2147024882);
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
      {
        LOBYTE(v6) = v8 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v6);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    v22 = sub_18000FA80(
            retaddr,
            1055,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
            v7);
    v16 = *(_QWORD *)(a1 + 56);
    if ( v16 )
    {
      LOBYTE(v17) = v16 != a1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v17);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    return v22;
  }
  return result;
}
