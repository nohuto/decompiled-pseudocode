/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF59E8
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF44E (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTe.c)
 *     ?ValidatePointer@InkDevice@@ABEJI@Z @ 0x1B1401 (-ValidatePointer@InkDevice@@ABEJI@Z.c)
 */

int __fastcall InkDevice::PreProcessInkFeedbackCommand_NoLock(int a1, int a2, int a3, unsigned int *a4, int a5)
{
  int v6; // esi
  int v7; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // ecx
  int v12; // [esp+Ch] [ebp-8h] BYREF
  const char *v13; // [esp+10h] [ebp-4h] BYREF

  v6 = 0;
  v7 = a3;
  if ( a3 == 1 )
  {
    if ( a5 != 64 )
    {
      v6 = -1073741811;
      if ( (unsigned int)CallbackContext <= 2 )
        return v6;
      goto LABEL_14;
    }
    v6 = InkDevice::ValidatePointer((struct tagPOINTER_INFO **)(a1 - 20), *a4);
    if ( v6 >= 0 || (unsigned int)CallbackContext <= 2 )
      return v6;
LABEL_17:
    a5 = (int)"ValidatePointer failed";
    a4 = (unsigned int *)v6;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v10,
      v10,
      &a4,
      &a5);
    return v6;
  }
  if ( a3 == 2 )
  {
    if ( a5 != 4 )
    {
      v6 = -1073741811;
      if ( (unsigned int)CallbackContext <= 2 )
        return v6;
LABEL_14:
      a5 = -1073741811;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (int)&CallbackContext,
        (int)&unk_2558E4,
        a3,
        a3,
        (int)&a5);
      return v6;
    }
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( IsProcessDwm(**(_DWORD **)(ThreadWin32Thread + 232)) )
      return v6;
    v6 = InkDevice::ValidatePointer((struct tagPOINTER_INFO **)(a1 - 20), *a4);
    if ( v6 >= 0 || (unsigned int)CallbackContext <= 2 )
      return v6;
    goto LABEL_17;
  }
  v6 = -1073741637;
  if ( (unsigned int)CallbackContext > 2 )
  {
    HIBYTE(a5) = a3;
    v13 = "Unsupported command";
    v12 = -1073741637;
    a4 = a1 != 20 ? (unsigned int *)a1 : 0;
    a3 = *(_DWORD *)(a1 + 24);
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v7,
      v7,
      &v12,
      &v13,
      &a3,
      &a4,
      (char *)&a5 + 3);
  }
  return v6;
}
