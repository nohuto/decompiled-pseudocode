/*
 * XREFs of ?AddPrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BFBF0
 * Callers:
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z2PEAPEAV1@@Z @ 0x1800C0194 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoi.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SharedObjectBase::AddPrivateReference(SharedObjectBase *this)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0x100000000uLL) >> 32;
  if ( (unsigned int)(result + 1) <= 2 )
    __fastfail(0xEu);
  return result;
}
