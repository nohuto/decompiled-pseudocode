/*
 * XREFs of ?Get@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEAUFailureInfo@3@@Z @ 0x1800B8A50
 * Callers:
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x1800B8ED4 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 * Callees:
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Get(
        wil::details_abi::ThreadLocalFailureInfo *this,
        struct wil::FailureInfo *a2)
{
  memset_0(a2, 0, 0x90uLL);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 2);
  *((_QWORD *)a2 + 6) = *((_QWORD *)this + 2);
  *((_DWORD *)a2 + 14) = *((unsigned __int16 *)this + 12);
  *(_DWORD *)a2 = *((unsigned __int8 *)this + 26);
  *((_QWORD *)a2 + 15) = *((_QWORD *)this + 4);
  *((_QWORD *)a2 + 16) = *((_QWORD *)this + 5);
  *((_QWORD *)a2 + 17) = *((_QWORD *)this + 6);
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 7);
}
