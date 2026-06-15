/*
 * XREFs of ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x180019E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x180019ECC (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationSpecificEndpointInfo *__fastcall ApplicationSpecificEndpointInfo::`scalar deleting destructor'(
        ApplicationSpecificEndpointInfo *this,
        char a2)
{
  ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
