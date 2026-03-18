/*
 * XREFs of ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0011CF4
 * Callers:
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01AFC48 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<unsigned short>::Initialize(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225990LL;
  }
  else
  {
    if ( a1[4] )
      WdLogSingleEntry0(1LL);
    v6 = operator new[](a2, 0x4E506456u, 256LL, a4);
    a1[4] = v6;
    if ( v6 )
    {
      a1[5] = a2;
      result = 0LL;
      a1[6] = 256LL;
    }
    else
    {
      WdLogSingleEntry1(6LL, a2);
      return 3221225495LL;
    }
  }
  return result;
}
