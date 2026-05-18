/*
 * XREFs of sub_18006187C @ 0x18006187C
 * Callers:
 *     sub_1800246C4 @ 0x1800246C4 (sub_1800246C4.c)
 *     sub_180025C00 @ 0x180025C00 (sub_180025C00.c)
 *     sub_1800338FC @ 0x1800338FC (sub_1800338FC.c)
 *     sub_180061808 @ 0x180061808 (sub_180061808.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     sub_18006B080 @ 0x18006B080 (sub_18006B080.c)
 *     sub_18006B210 @ 0x18006B210 (sub_18006B210.c)
 *     sub_18006C734 @ 0x18006C734 (sub_18006C734.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     sub_1800862F4 @ 0x1800862F4 (sub_1800862F4.c)
 *     sub_1800867D4 @ 0x1800867D4 (sub_1800867D4.c)
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 *     sub_1800872F4 @ 0x1800872F4 (sub_1800872F4.c)
 *     sub_180087E48 @ 0x180087E48 (sub_180087E48.c)
 *     sub_18008866C @ 0x18008866C (sub_18008866C.c)
 *     sub_1800891C4 @ 0x1800891C4 (sub_1800891C4.c)
 *     sub_180089770 @ 0x180089770 (sub_180089770.c)
 *     sub_18008C610 @ 0x18008C610 (sub_18008C610.c)
 *     sub_180094B80 @ 0x180094B80 (sub_180094B80.c)
 *     sub_1800A3C48 @ 0x1800A3C48 (sub_1800A3C48.c)
 *     sub_1800A441C @ 0x1800A441C (sub_1800A441C.c)
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 *     sub_1800EF2A0 @ 0x1800EF2A0 (sub_1800EF2A0.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180061358 @ 0x180061358 (sub_180061358.c)
 *     sub_1800619F0 @ 0x1800619F0 (sub_1800619F0.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18006187C(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    LOBYTE(a2) = 1;
    if ( !(unsigned __int8)sub_1800619F0(a1, a2) )
    {
      sub_18000FD48(v4);
      v2 = sub_18000FD48(v3);
      sub_180061358(pExceptionObject, v2, 279, (__int64)v4, 0);
      throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
    }
  }
}
