/*
 * XREFs of ?QueryNameStringFromHandle@@YGJPAXPAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x8CAA8
 * Callers:
 *     ?bIsFileInSystemFontsDir@@YGHPAX@Z @ 0x8CA36 (-bIsFileInSystemFontsDir@@YGHPAX@Z.c)
 *     _vInitFontsDirectoryNameInformation@0 @ 0xDB878 (_vInitFontsDirectoryNameInformation@0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge QueryNameStringFromHandle@<eax>(
        struct _OBJECT_NAME_INFORMATION *a1@<edx>,
        void *a2@<ecx>,
        void *a3,
        struct _OBJECT_NAME_INFORMATION *a4,
        unsigned int a5,
        char a6)
{
  NTSTATUS v7; // eax
  PVOID v8; // edi
  NTSTATUS v9; // esi
  ULONG ReturnLength; // [esp+Ch] [ebp-8h] BYREF
  PVOID Object; // [esp+10h] [ebp-4h] BYREF

  Object = 0;
  v7 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0);
  v8 = Object;
  v9 = v7;
  if ( v7 >= 0 )
  {
    ReturnLength = 0;
    v9 = ObQueryNameString(Object, a1, 0x190u, &ReturnLength);
    ObfDereferenceObject(v8);
  }
  return v9;
}
