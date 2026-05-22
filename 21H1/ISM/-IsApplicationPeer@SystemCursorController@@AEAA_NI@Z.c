/*
 * XREFs of ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800050EC
 * Callers:
 *     ?OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x1800050A0 (-OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z.c)
 *     ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013BA50 (-AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCust.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C1F0 (-CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStu.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C940 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x18013D18C (-SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SystemCursorController::IsApplicationPeer(SystemCursorController *this, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_2;
  do
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
LABEL_2:
    v3 = v2;
  return v3 != v2;
}
