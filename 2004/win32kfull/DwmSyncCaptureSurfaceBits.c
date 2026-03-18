/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x1C0058B3C
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00584D4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C003E158 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10)
{
  signed int v13; // ebx
  _DWORD *v14; // rsi
  int v15; // eax
  _QWORD *v16; // rdx
  _BYTE v18[88]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+37h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v13 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v18, 0, sizeof(v18));
      *(_DWORD *)&v18[52] = a4;
      v14 = a9;
      *(_WORD *)&v18[4] = 0x8000;
      *(_DWORD *)&v18[56] = a5;
      *(_DWORD *)&v18[60] = a6;
      *(_DWORD *)&v18[64] = a7;
      *(_DWORD *)&v18[68] = *a9;
      *(_QWORD *)&v18[72] = a8;
      *(_DWORD *)v18 = 5767216;
      *(_DWORD *)&v18[40] = -2147483642;
      *(double *)&v18[44] = a3;
      *(_QWORD *)&v18[80] = a2;
      EtwUpdateEvent(0LL);
      v19 = 88LL;
      v15 = ((__int64 (__fastcall *)(PVOID, __int64, _BYTE *, _BYTE *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
              Object,
              0x20000LL,
              v18,
              v18,
              &v19,
              0LL);
      v13 = SyncLpcCheckNtStatus(v15, (struct _PORT_MESSAGE *)v18);
      if ( v13 >= 0 && *(_WORD *)v18 == 20 )
      {
        if ( *(int *)&v18[44] < 0 )
        {
          v13 = -1073741823;
        }
        else
        {
          v16 = a10;
          *v14 = *(_DWORD *)&v18[48];
          *v16 = *(_QWORD *)&v18[52];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
