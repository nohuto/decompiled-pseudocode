/*
 * XREFs of ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C0139DD0
 * Callers:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C0139D34 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02E8FB8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(
        BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this,
        __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-40h]
  __int128 v6; // [rsp+30h] [rbp-30h]
  __int128 v7; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v5 + 1) = -1LL;
  *(_QWORD *)&v5 = 0LL;
  *(_QWORD *)&v6 = 0xFFFFFFFEFFFFFFFEuLL;
  *(_OWORD *)this = v5;
  *((_QWORD *)&v6 + 1) = 0xFFFFFFFF00000000uLL;
  *(_QWORD *)&v7 = 0x100000000LL;
  *((_OWORD *)this + 1) = v6;
  WORD4(v7) = 0;
  HIDWORD(v7) = 4;
  LOWORD(v8) = 256;
  *((_OWORD *)this + 2) = v7;
  *((_DWORD *)this + 12) = v8;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_,
             (__int64)this,
             4);
  if ( (_DWORD)result == -2147483622 )
    result = 0LL;
  if ( (int)result >= 0 && *((_DWORD *)this + 3) == -1 )
    return 3221225473LL;
  return result;
}
