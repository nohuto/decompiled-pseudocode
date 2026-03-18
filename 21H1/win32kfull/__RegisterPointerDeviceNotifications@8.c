/*
 * XREFs of __RegisterPointerDeviceNotifications@8 @ 0xE7AEC
 * Callers:
 *     _NtUserRegisterPointerDeviceNotifications@8 @ 0xE7A64 (_NtUserRegisterPointerDeviceNotifications@8.c)
 * Callees:
 *     <none>
 */

int __fastcall _RegisterPointerDeviceNotifications(struct _LIST_ENTRY *a1, int a2)
{
  struct _LIST_ENTRY *Flink; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  struct _LIST_ENTRY *v11; // eax

  Flink = gPointerDeviceClients.Flink;
  v3 = 0;
  while ( Flink != &gPointerDeviceClients )
  {
    v11 = Flink - 1;
    Flink = Flink->Flink;
    if ( v11->Flink == a1 )
      return v3;
  }
  v4 = (_DWORD *)Win32AllocPool(16, 2020635477);
  v7 = v4;
  if ( v4 )
  {
    *v4 = 0;
    HMAssignmentLock(v6, v5);
    v7[1] = a2;
    v8 = v7 + 2;
    v9 = (_DWORD *)dword_274DF8;
    if ( *(struct _LIST_ENTRY **)dword_274DF8 != &gPointerDeviceClients )
      __fastfail(3u);
    *v8 = &gPointerDeviceClients;
    v7[3] = v9;
    v3 = 1;
    *v9 = v8;
    dword_274DF8 = (int)(v7 + 2);
  }
  return v3;
}
