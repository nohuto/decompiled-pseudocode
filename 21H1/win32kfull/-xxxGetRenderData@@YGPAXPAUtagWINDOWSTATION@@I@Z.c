/*
 * XREFs of ?xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z @ 0x182AF1
 * Callers:
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

void *__fastcall xxxGetRenderData(int a1, unsigned int a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  BOOL v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  struct tagCLIP *ClipFormat; // eax
  unsigned int v14; // [esp+0h] [ebp-2Ch]
  unsigned int v15; // [esp+4h] [ebp-28h]
  _DWORD v16[3]; // [esp+8h] [ebp-24h] BYREF
  int v17; // [esp+14h] [ebp-18h] BYREF
  int v18; // [esp+18h] [ebp-14h]
  int v19; // [esp+1Ch] [ebp-10h]
  int v20; // [esp+20h] [ebp-Ch]
  int v21; // [esp+24h] [ebp-8h] BYREF
  unsigned int HighLimit; // [esp+28h] [ebp-4h]

  HighLimit = a2;
  v17 = 0;
  v21 = 0;
  v3 = *(_DWORD *)(a1 + 56);
  v18 = 0;
  v19 = 0;
  memset(v16, 0, sizeof(v16));
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 32) & 0x40;
    *(_DWORD *)(a1 + 32) |= 0x80u;
    v5 = PsChargeProcessWakeCounter(**(_DWORD **)(*(_DWORD *)(v3 + 8) + 232), 0, 2, 0);
    v20 = v5;
    if ( v5 )
      PushW32ThreadLock(v5, v16, (int)ReleaseWakeReference);
    v6 = *(_DWORD *)(a1 + 56);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v17 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v17;
    v18 = v6;
    HMLockObject(v6);
    v9 = xxxSendTransformableMessageTimeout(
           *(_DWORD *)(a1 + 56),
           0x305u,
           HighLimit,
           0,
           0x42u,
           (struct tagDDECONV *)0x7530,
           &v21,
           1u,
           0) != 0;
    ThreadUnlock1();
    if ( v20 )
      PopAndFreeAlwaysW32ThreadLock((int)v16);
    v10 = *(_DWORD *)(a1 + 32);
    v11 = v4 ? v10 | 0x40 : v10 & 0xFFFFFFBF;
    *(_DWORD *)(a1 + 32) = v11 & 0xFFFFFF7F;
    if ( !v9 )
      return 0;
  }
  ClipFormat = FindClipFormat(HighLimit, a1, (struct tagWINDOWSTATION *)1, v14, v15);
  if ( ClipFormat )
    return (void *)*((_DWORD *)ClipFormat + 1);
  else
    return 0;
}
