/*
 * XREFs of ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0212670
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C016A6D0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0039D24 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01315B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsInVirtualMode(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int v2; // ebx
  int **SessionViewOwner; // rax

  v2 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  while ( 1 )
  {
    if ( ((a2 + 3) & 0xFFFFFFFD) == 0 || v2 == a2 )
    {
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(this, v2);
      if ( SessionViewOwner )
      {
        if ( *((_DWORD *)SessionViewOwner + 10) > 1u || !ADAPTER_DISPLAY::IsIdenticalMode(this, v2) )
          break;
      }
    }
    if ( ++v2 >= *((_DWORD *)this + 20) )
      return 0;
  }
  return 1;
}
