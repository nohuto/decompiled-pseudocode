/*
 * XREFs of ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x18021905C
 * Callers:
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x180218F10 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x18037FC00 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(void *a1)
{
  char v1; // bl
  DWORD v2; // eax
  DWORD v3; // eax
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF
  HANDLE pHandles; // [rsp+70h] [rbp+8h] BYREF

  pHandles = a1;
  v1 = 1;
  do
  {
    v2 = MsgWaitForMultipleObjectsEx(1u, &pHandles, 0xFFFFFFFF, 0x1CFFu, 6u);
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 191 )
          return;
      }
      else
      {
        while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
        {
          TranslateMessage(&Msg);
          DispatchMessageW(&Msg);
        }
      }
    }
    else
    {
      v1 = 0;
    }
  }
  while ( v1 );
}
