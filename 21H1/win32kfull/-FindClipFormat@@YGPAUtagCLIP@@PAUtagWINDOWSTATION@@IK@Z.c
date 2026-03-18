/*
 * XREFs of ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE
 * Callers:
 *     _NtUserIsClipboardFormatAvailable@4 @ 0x1159A (_NtUserIsClipboardFormatAvailable@4.c)
 *     ?InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z @ 0x181B81 (-InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z.c)
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B (-xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7 (-xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z @ 0x182A3B (-xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z @ 0x182AF1 (-xxxGetRenderData@@YGPAXPAUtagWINDOWSTATION@@I@Z.c)
 *     __EnumClipboardFormats@4 @ 0x182E64 (__EnumClipboardFormats@4.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?IsFmtBlocked@@YGHI@Z @ 0xF3F48 (-IsFmtBlocked@@YGHI@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z @ 0x1818DE (-CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z.c)
 */

struct tagCLIP *__userpurge FindClipFormat@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWINDOWSTATION *a3,
        unsigned int a4,
        unsigned int a5)
{
  _DWORD *v6; // esi
  int i; // eax
  int CurrentProcessWin32Process; // eax
  int v10; // eax
  int v11; // [esp-8h] [ebp-10h]
  int v12; // [esp-4h] [ebp-Ch]
  unsigned int v13; // [esp+0h] [ebp-8h]

  if ( a1 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    if ( v6 )
    {
      for ( i = *(_DWORD *)(a2 + 68); i; --i )
      {
        if ( *v6 == a1 )
        {
          if ( ((unsigned __int8)a3 & 1) != 0 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
            if ( !CheckClipboardAccessForIntegrityLevel(
                    v6[3],
                    v6[4],
                    *(_DWORD *)(CurrentProcessWin32Process + 496),
                    *(_DWORD *)(CurrentProcessWin32Process + 500)) )
            {
              if ( IsFmtBlocked(v13) )
              {
                v12 = v6[4];
                v11 = v6[3];
                v10 = PsGetCurrentProcessWin32Process();
                EtwTraceUIPIClipboardError(0, v10, a1, v11, v12);
                return 0;
              }
            }
          }
          return (struct tagCLIP *)v6;
        }
        v6 += 5;
      }
    }
  }
  return 0;
}
