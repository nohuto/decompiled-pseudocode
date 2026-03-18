/*
 * XREFs of IopCollectTriageDumpData @ 0x1405540DC
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     IoWritePristineTriageDump @ 0x140553968 (IoWritePristineTriageDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoFillTriageDumpBuffer @ 0x14055225C (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x1405550FC (IopUpdateMinidumpContext.c)
 *     MmSnapTriageDumpInformation @ 0x140593778 (MmSnapTriageDumpInformation.c)
 */

__int64 __fastcall IopCollectTriageDumpData(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        char a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 *v10; // rbx
  __int64 result; // rax
  int v12; // [rsp+70h] [rbp-58h] BYREF
  _DWORD v13[2]; // [rsp+78h] [rbp-50h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp-48h]
  _BYTE v15[32]; // [rsp+88h] [rbp-40h] BYREF

  v10 = a10;
  v12 = 0;
  if ( !a10 )
  {
    v10 = *(__int64 **)(CrashdmpDumpBlock + 1328);
    if ( !v10 )
      return 3221225473LL;
  }
  if ( (KiBugCheckActive & 3) == 0 || IoPreparedTriageDumpData )
    return 3221225473LL;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, (__int64)a7);
  MmSnapTriageDumpInformation(a6, v15);
  v13[0] = IopNumTriageDumpDataBlocks;
  v13[1] = 256;
  v14 = IopTriageDumpDataBlocks;
  result = IoFillTriageDumpBuffer(
             0x3E000u,
             v10,
             1,
             a8 != 0 ? 3319 : 3583,
             0LL,
             a6,
             a7,
             CmNtCSDVersion,
             65,
             1u,
             (__int64)v13,
             (__int64)v13,
             &v12);
  if ( (int)result >= 0 )
    IoPreparedTriageDumpData = v10;
  return result;
}
