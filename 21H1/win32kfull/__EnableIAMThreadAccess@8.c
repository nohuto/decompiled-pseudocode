/*
 * XREFs of __EnableIAMThreadAccess@8 @ 0xA5062
 * Callers:
 *     _NtUserEnableIAMAccess@8 @ 0xF2AAE (_NtUserEnableIAMAccess@8.c)
 * Callees:
 *     ?FindIAMThread@@YGPAUtagIAM_THREAD@@QBUtagTHREADINFO@@@Z @ 0x2615C (-FindIAMThread@@YGPAUtagIAM_THREAD@@QBUtagTHREADINFO@@@Z.c)
 */

int __fastcall _EnableIAMThreadAccess(struct _LIST_ENTRY *a1, int a2)
{
  int v2; // edi
  struct _LIST_ENTRY *IAMThread; // edx
  struct _LIST_ENTRY *Flink; // eax
  struct _LIST_ENTRY *v6; // eax
  struct _LIST_ENTRY *v7; // ecx
  struct _LIST_ENTRY *Blink; // edx

  v2 = 0;
  if ( a2 )
  {
    IAMThread = FindIAMThread(a1);
    if ( IAMThread )
    {
LABEL_11:
      IAMThread[1].Blink = a1[31].Flink;
      return 1;
    }
    IAMThread = (struct _LIST_ENTRY *)Win32AllocPoolZInit(16, 1869443925);
    if ( IAMThread )
    {
      Flink = gIAMThreadList.Flink;
      if ( gIAMThreadList.Flink->Blink != &gIAMThreadList )
        goto LABEL_5;
      IAMThread->Flink = gIAMThreadList.Flink;
      IAMThread->Blink = &gIAMThreadList;
      Flink->Blink = IAMThread;
      gIAMThreadList.Flink = IAMThread;
      IAMThread[1].Flink = a1;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = FindIAMThread(a1);
    if ( v6 )
    {
      v7 = v6->Flink;
      if ( v6->Flink->Blink != v6 || (Blink = v6->Blink, Blink->Flink != v6) )
LABEL_5:
        __fastfail(3u);
      Blink->Flink = v7;
      v7->Blink = Blink;
      Win32FreePool(v6);
      return 1;
    }
  }
  return v2;
}
