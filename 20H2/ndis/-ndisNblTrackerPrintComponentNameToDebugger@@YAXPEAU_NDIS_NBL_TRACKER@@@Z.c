/*
 * XREFs of ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073D98
 * Callers:
 *     ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073CB4 (-ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0073EC0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisNblTrackerPrintComponentNameToDebugger(struct _NDIS_NBL_TRACKER *a1)
{
  const _UNICODE_STRING *Name; // rdx
  __int64 v3; // rdi
  wchar_t v4; // dx
  void *Context; // rdx
  const CHAR *v6; // rcx

  if ( a1->Name )
  {
    DbgPrint("Component: \"");
    Name = a1->Name;
    v3 = 0LL;
    if ( (Name->Length & 0xFFFE) != 0 )
    {
      do
      {
        v4 = Name->Buffer[v3];
        if ( (unsigned __int16)(v4 - 32) > 0x5Eu )
          DbgPrint("?");
        else
          DbgPrint("%c", (unsigned int)(char)v4);
        Name = a1->Name;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < Name->Length >> 1 );
    }
    DbgPrint("\"  (run \"du %p\")\n", Name->Buffer);
  }
  switch ( *((_WORD *)a1 + 8) )
  {
    case 0:
      v6 = "!ndiskd.miniport %p\n";
      goto LABEL_22;
    case 1:
      v6 = "!ndiskd.filter %p\n";
      goto LABEL_22;
    case 2:
      v6 = "!ndiskd.mopen %p\n";
LABEL_22:
      DbgPrint(v6, a1->Context);
      return;
  }
  Context = a1->Context;
  switch ( *((_WORD *)a1 + 8) )
  {
    case 3:
      DbgPrint("No pause on suspend receive return queue, on behalf of !ndiskd.miniport %p\n", Context);
      break;
    case 4:
      DbgPrint("Selective suspend send queue, on behalf of !ndiskd.miniport %p\n", Context);
      break;
    case 5:
      DbgPrint("Selective suspend receive return queue, on behalf of !ndiskd.miniport %p\n", Context);
      break;
    default:
      if ( Context )
        DbgPrint("Context: %p\n", Context);
      break;
  }
}
