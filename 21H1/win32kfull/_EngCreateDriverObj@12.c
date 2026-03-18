/*
 * XREFs of _EngCreateDriverObj@12 @ 0x1E4069
 * Callers:
 *     _VerifierEngCreateDriverObj@12 @ 0x1FC96D (_VerifierEngCreateDriverObj@12.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  HDRVOBJ v3; // edi
  struct OBJECT *Object; // eax
  struct OBJECT *v5; // esi
  HDEV v6; // ecx
  HDEV v8; // [esp+8h] [ebp-4h] BYREF

  v3 = 0;
  Object = (struct OBJECT *)AllocateObject(36, 28, 0);
  v5 = Object;
  if ( Object )
  {
    v6 = hdev;
    *((_DWORD *)Object + 4) = pvObj;
    v8 = v6;
    *((_DWORD *)Object + 5) = pFreeObjProc;
    *((_DWORD *)Object + 6) = v6;
    *(_DWORD *)((struct HDEV__ *)Object + 7) = v6[277];
    *((_DWORD *)Object + 8) = PsGetCurrentProcess();
    hdev = 0;
    v3 = (HDRVOBJ)HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&hdev, v5, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v8);
    else
      FreeObject(v5, 28);
    if ( hdev )
      _InterlockedDecrement((volatile signed __int32 *)hdev + 2);
  }
  return v3;
}
