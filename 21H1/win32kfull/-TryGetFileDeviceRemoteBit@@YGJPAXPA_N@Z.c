/*
 * XREFs of ?TryGetFileDeviceRemoteBit@@YGJPAXPA_N@Z @ 0x8CC9A
 * Callers:
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TryGetFileDeviceRemoteBit(void *a1, _BYTE *a2)
{
  NTSTATUS v3; // esi
  PVOID v4; // ecx
  PVOID Object; // [esp+Ch] [ebp-4h] BYREF

  Object = 0;
  *a2 = 0;
  v3 = ObReferenceObjectByHandle(a1, 0x80000000, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0);
  if ( v3 >= 0 )
  {
    v4 = Object;
    if ( (*(_BYTE *)(*((_DWORD *)Object + 1) + 32) & 0x10) != 0 )
      *a2 = 1;
    ObfDereferenceObject(v4);
  }
  return v3;
}
