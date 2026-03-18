/*
 * XREFs of ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z @ 0x180289538
 * Callers:
 *     ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802898A0 (-GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     ?GetKernelHandle@CD3DDevice@@QEBAIXZ @ 0x1802897CC (-GetKernelHandle@CD3DDevice@@QEBAIXZ.c)
 */

bool __fastcall CDummyRemotingSwapChain::CPresentStats::CheckPresentCompleted(
        CDummyRemotingSwapChain::CPresentStats *this,
        struct CD3DDevice *a2,
        int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-20h]

  if ( !*((_BYTE *)this + 48) && !WaitForSingleObject(*(HANDLE *)this, 0) )
  {
    *((_BYTE *)this + 48) = 1;
    v9[0] = CD3DDevice::GetKernelHandle(a2);
    v10 = 0LL;
    LODWORD(v10) = a3;
    v9[1] = 4;
    v11 = 0LL;
    v12 = 0LL;
    if ( (unsigned int)D3DKMTGetDeviceState(v9) )
    {
      *(_OWORD *)((char *)this + 8) = 0LL;
      *(_OWORD *)((char *)this + 24) = 0LL;
      *((_QWORD *)this + 5) = 0LL;
    }
    else
    {
      v6 = DWORD2(v11);
      v7 = v12;
      *((_QWORD *)this + 2) = v12;
      *((_QWORD *)this + 4) = v7;
      *((_DWORD *)this + 3) = v6;
      *((_DWORD *)this + 6) = v6;
      *((_DWORD *)this + 10) = v6;
    }
  }
  return *((_BYTE *)this + 48);
}
