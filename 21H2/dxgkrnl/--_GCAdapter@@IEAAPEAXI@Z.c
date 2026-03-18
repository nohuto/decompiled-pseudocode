/*
 * XREFs of ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C001BED0
 * Callers:
 *     ?Release@CAdapter@@UEAAJXZ @ 0x1C001BEA0 (-Release@CAdapter@@UEAAJXZ.c)
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x1C001C094 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C001BF04 (--1CAdapter@@IEAA@XZ.c)
 */

CAdapter *__fastcall CAdapter::`scalar deleting destructor'(CAdapter *P)
{
  CAdapter::~CAdapter(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
