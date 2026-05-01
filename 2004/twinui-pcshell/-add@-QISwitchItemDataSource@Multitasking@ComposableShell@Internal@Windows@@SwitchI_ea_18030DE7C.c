/*
 * XREFs of ?add@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollectionChanged@SwitchItemDataViewImpl@2345@UE$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@95@@Z @ 0x18030DE7C
 * Callers:
 *     ?add@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollectionChanged@SwitchItemDataViewImpl@2345@WBA@E$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@95@@Z @ 0x1800FA3A0 (-add@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemCollection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _add__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemCollectionChanged_SwitchItemDataViewImpl_2345_UE_AAA_AVEventRegistrationToken_Foundation_5_PE_AAV__TypedEventHandler_PE_AAUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemCollectionChangedEventArgs_2345__95__Z(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = Platform::Details::EventSourceAdd(a1 + 48, a1 + 136);
  return a2;
}
