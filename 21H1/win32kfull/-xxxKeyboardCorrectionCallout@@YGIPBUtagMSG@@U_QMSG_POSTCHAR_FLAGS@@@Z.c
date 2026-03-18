/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YGIPBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0xC12BC
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 */

int __thiscall xxxKeyboardCorrectionCallout(const void *this, unsigned int HighLimit)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // esi
  int v15; // eax
  int v16; // ecx
  int v18[7]; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v19[3]; // [esp+28h] [ebp-14h] BYREF
  int v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h] BYREF

  v20 = _gptiCurrent;
  qmemcpy(v18, this, sizeof(v18));
  v2 = 0;
  v3 = HMValidateHandleNoSecure(v18[0], 1);
  v19[2] = 0;
  if ( !v3 )
    return 87;
  v4 = *(_DWORD *)(v3 + 20);
  v5 = *(_DWORD *)(v4 + 148);
  if ( (v5 == 1 || v5 == 2) && (*(_BYTE *)(v4 + 146) & 0x20) == 0 )
    return v2;
  v6 = *(_DWORD *)(_gptiCurrent + 248);
  if ( !v6 )
    return v2;
  v7 = *(_DWORD *)(v6 + 144);
  if ( !v7 )
    return v2;
  v21 = 0;
  v9 = *(_DWORD *)(v7 + 20);
  if ( *(char *)(v9 + 12) < 0 || *(char *)(v9 + 11) < 0 )
    return 5;
  v10 = *(_DWORD *)(v7 + 8);
  if ( v20 != v10 )
  {
    if ( (unsigned __int8)CheckAccess(*(_DWORD *)(v10 + 232) + 496, *(_DWORD *)(v20 + 232) + 496) )
    {
      v11 = *(_DWORD *)(v6 + 144);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v19[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v19;
      v19[1] = v11;
      if ( v11 )
        HMLockObject(v11);
      v14 = -(xxxSendTransformableMessageTimeout(
                *(_DWORD *)(v6 + 144),
                0x32Cu,
                (unsigned int)&HighLimit,
                (int)v18,
                2u,
                (struct tagDDECONV *)guiKeyboardCorrectionCalloutTimeout,
                &v21,
                1u,
                0) != 0);
      ThreadUnlock1();
      if ( v14 == -1 )
      {
        if ( v21 == 255 )
          return 1296;
      }
      else
      {
        v15 = HMAssignmentUnlock(v6 + 144);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 20);
          if ( *(char *)(v16 + 12) >= 0 && *(char *)(v16 + 11) >= 0 )
            _PostMessage(v15, 813, 0, 0);
        }
        return 1460;
      }
      return v2;
    }
    return 5;
  }
  return 0;
}
