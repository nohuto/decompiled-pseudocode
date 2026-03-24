/*
 * XREFs of _anonymous_namespace_::AddToResourceCount @ 0x1800C704C
 * Callers:
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E780 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18005E9EC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x1800A1CD4 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800A1E44 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_C.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::AddToResourceCount(unsigned int a1, int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  if ( a1 > 0x2C )
  {
    v2 = a1 - 90;
    if ( !v2 )
    {
      DWORD1(xmmword_180347100) += a2;
      return;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
LABEL_9:
      LODWORD(xmmword_180347100) = a2 + xmmword_180347100;
      return;
    }
    v4 = v3 - 86;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 17;
        if ( v6 )
        {
          if ( v6 != 8 )
            goto LABEL_8;
        }
      }
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( a1 == 44 )
  {
LABEL_20:
    DWORD2(xmmword_1803470F0) += a2;
    return;
  }
  v7 = a1 - 30;
  if ( v7 && (v8 = v7 - 2) != 0 && (v9 = v8 - 2) != 0 && (v10 = v9 - 2) != 0 && (v11 = v10 - 3) != 0 )
  {
    if ( v11 != 1 )
    {
LABEL_8:
      HIDWORD(xmmword_1803470F0) += a2;
      return;
    }
    HIDWORD(xmmword_180347100) += a2;
  }
  else
  {
    DWORD2(xmmword_180347100) += a2;
  }
}
