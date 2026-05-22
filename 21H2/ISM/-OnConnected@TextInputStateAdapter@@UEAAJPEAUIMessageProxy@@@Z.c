/*
 * XREFs of ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A2F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801491D0 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801A30A4 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 */

__int64 __fastcall TextInputStateAdapter::OnConnected(TextInputStateAdapter *this, struct IMessageProxy *a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r9

  *((_BYTE *)this + 56) = 1;
  v3 = 0;
  while ( v3 != 18 )
  {
    if ( (unsigned int)(v3 - 14) > 1 && v3 != 27 )
    {
      v4 = TextInputStateAdapter::PropertyChangeHelper(this, v3, 1);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          return v7;
        v8 = 95LL;
        goto LABEL_13;
      }
    }
LABEL_9:
    if ( ++v3 >= 37 )
      return 0;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 5) + 176LL))(
         *((_QWORD *)this + 5),
         (char *)this + 96);
  v7 = v4;
  if ( v4 >= 0 )
    goto LABEL_9;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
    return v7;
  v8 = 101LL;
LABEL_13:
  McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::OnConnected", v8, v4);
  return v7;
}
