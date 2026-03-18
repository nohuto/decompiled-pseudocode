/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0256AE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024FFC0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0254880 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02575E0 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::PreProcessInkFeedbackCommand_NoLock(__int64 a1, int a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // ebx
  struct _EVENT_DATA_DESCRIPTOR *v7; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[4]; // [rsp+58h] [rbp-59h] BYREF
  int v17; // [rsp+5Ch] [rbp-55h] BYREF
  int v18; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-4Dh] BYREF
  int v20; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+6Ch] [rbp-45h] BYREF
  __int64 v22; // [rsp+70h] [rbp-41h] BYREF
  void *v23; // [rsp+78h] [rbp-39h] BYREF
  const char *v24; // [rsp+80h] [rbp-31h] BYREF
  const char *v25; // [rsp+88h] [rbp-29h] BYREF
  const char *v26; // [rsp+90h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+98h] [rbp-19h] BYREF
  int *v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+C0h] [rbp+Fh]
  int v30; // [rsp+C4h] [rbp+13h]
  char v31; // [rsp+C8h] [rbp+17h] BYREF
  int *v32; // [rsp+E8h] [rbp+37h]
  int v33; // [rsp+F0h] [rbp+3Fh]
  int v34; // [rsp+F4h] [rbp+43h]

  v5 = 0;
  if ( a2 == 1 )
  {
    if ( (_DWORD)a4 != 64 )
    {
      v5 = -1073741811;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v5;
      v34 = 0;
      v20 = -1073741811;
      v32 = &v20;
      v7 = (struct _EVENT_DATA_DESCRIPTOR *)&v31;
      v33 = 4;
      goto LABEL_15;
    }
    v5 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), *a3);
    if ( (v5 & 0x80000000) != 0 && (unsigned int)dword_1C032B288 > 2 )
    {
      v21 = v5;
      v26 = "ValidatePointer failed";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v12,
        byte_1C02F2423,
        v13,
        v14,
        (__int64)&v21,
        (void **)&v26);
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      v5 = -1073741637;
      if ( (unsigned int)dword_1C032B288 > 2 )
      {
        v16[0] = a2;
        v17 = -1073741637;
        v23 = *(void **)(a1 + 48);
        v24 = "Unsupported command";
        v22 = a1 & -(__int64)(a1 != 32);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v22,
          byte_1C02F2A86,
          (unsigned int)(a2 - 1),
          a4,
          (__int64)&v17,
          (void **)&v24,
          &v23,
          (__int64)&v22,
          (__int64)v16);
      }
      return v5;
    }
    if ( (_DWORD)a4 != 4 )
    {
      v5 = -1073741811;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v5;
      v30 = 0;
      v18 = -1073741811;
      v28 = &v18;
      v7 = &v27;
      v29 = 4;
LABEL_15:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B288, (unsigned __int8 *)dword_1C02F13FC, 0LL, 0LL, 3u, v7);
      return v5;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !(unsigned int)IsProcessDwm(**(_QWORD **)(ThreadWin32Thread + 416)) )
    {
      v5 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), *a3);
      if ( (v5 & 0x80000000) != 0 && (unsigned int)dword_1C032B288 > 2 )
      {
        v19 = v5;
        v25 = "ValidatePointer failed";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v9,
          byte_1C02F2423,
          v10,
          v11,
          (__int64)&v19,
          (void **)&v25);
      }
    }
  }
  return v5;
}
