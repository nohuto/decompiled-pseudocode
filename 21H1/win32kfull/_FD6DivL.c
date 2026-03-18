/*
 * XREFs of _FD6DivL @ 0xEDA24
 * Callers:
 *     _AntiLog @ 0x1BC57A (_AntiLog.c)
 *     _Log @ 0x1BC88F (_Log.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

int __cdecl FD6DivL(int a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // rax

  v4 = a2;
  LODWORD(v4) = abs32(a2);
  v2 = (_DWORD)v4 == 0;
  v3 = v4;
  LODWORD(v4) = a1;
  if ( !v2 )
  {
    v4 = a1;
    LODWORD(v4) = abs32(a1);
    if ( (_DWORD)v4 )
      LODWORD(v4) = (HIDWORD(v4) ^ HIDWORD(v3) ^ (((unsigned int)v4 % (unsigned int)v3 >= (unsigned int)v3
                                                                                        - (unsigned int)v4
                                                                                        % (unsigned int)v3)
                                                + (unsigned int)v4 / (unsigned int)v3))
                  - (HIDWORD(v4) ^ HIDWORD(v3));
  }
  return v4;
}
