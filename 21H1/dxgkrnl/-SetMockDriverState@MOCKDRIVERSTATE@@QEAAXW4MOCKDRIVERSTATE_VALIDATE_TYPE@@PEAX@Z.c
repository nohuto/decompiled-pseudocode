/*
 * XREFs of ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C004C66C
 * Callers:
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C003C0EC (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 * Callees:
 *     <none>
 */

void __fastcall MOCKDRIVERSTATE::SetMockDriverState(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // rax

  if ( *(_BYTE *)(a1 + 2728) )
  {
    v4 = 0LL;
    if ( a3[3] )
    {
      v5 = 5LL * *a3;
      do
      {
        v6 = *(unsigned int **)(*((_QWORD *)a3 + 2) + 8 * v4);
        v7 = *v6;
        v8 = v6[4] & 1;
        *(_BYTE *)(a1 + 16 * (v7 + 2 * v5) + 8) = v8;
        if ( v8 )
          v9 = *(_QWORD *)(**((_QWORD **)v6 + 4) + 8LL);
        else
          v9 = 0LL;
        v4 = (unsigned int)(v4 + 1);
        *(_QWORD *)(a1 + 16 * (v7 + 2 * v5)) = v9;
      }
      while ( (unsigned int)v4 < a3[3] );
    }
  }
}
