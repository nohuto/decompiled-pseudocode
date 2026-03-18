/*
 * XREFs of ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800C347C
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18009CC20 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x18009DBFC (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x1800A4EB4 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x1800A5024 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUtagMILCMD_C.c)
 * Callees:
 *     <none>
 */

void __fastcall AddToResourceCount(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  if ( a2 > 44 )
  {
    v3 = a2 - 90;
    if ( !v3 )
    {
      a1[18] += a3;
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
LABEL_9:
      a1[17] += a3;
      return;
    }
    v5 = v4 - 86;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 17;
        if ( v7 )
        {
          if ( v7 != 8 )
            goto LABEL_8;
        }
      }
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( a2 == 44 )
  {
LABEL_20:
    a1[15] += a3;
    return;
  }
  v8 = a2 - 30;
  if ( v8 && (v9 = v8 - 2) != 0 && (v10 = v9 - 2) != 0 && (v11 = v10 - 2) != 0 && (v12 = v11 - 3) != 0 )
  {
    if ( v12 != 1 )
    {
LABEL_8:
      a1[16] += a3;
      return;
    }
    a1[20] += a3;
  }
  else
  {
    a1[19] += a3;
  }
}
